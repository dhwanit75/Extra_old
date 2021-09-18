// SPDX-License-Identifier: MIT
pragma solidity >=0.4.25 <0.7.0;

contract MetaCoin {
	
  mapping (address => uint256) balances;

	event Transfer(address indexed _from, address indexed _to, uint256 _value);

	constructor() public {
		balances[tx.origin] = 100000;
	}

	function sendCoin(address receiver, uint256 amount, address sender) public returns(bool sufficient) {
		if (balances[sender] < amount) return false;
		balances[sender] -= amount;
		balances[receiver] += amount;
		emit Transfer(sender, receiver, amount);
		return true;
	}


	function getBalance(address addr) public view returns(uint256) {
		return balances[addr];
	}
}

contract Loan is MetaCoin {
  
  mapping (address => uint256) private loans;
     
  event Request(address indexed _from, uint256 P, uint R, uint T, uint256 amt);
    
  address private Owner;

    
  modifier isOwner() {
        // Implement a modifier to allow only the owner of the contract to use specific functions
        if(Owner==msg.sender)
        _;
        
    }
    
  constructor() public {
        // Make the creator of the contract the Owner.
        // You can take the help of 2_owner.sol contract in remix for this and the above function. 
        Owner=tx.origin;
    }
    
  function getCompoundInterest(uint256 principle, uint rate, uint time) public pure returns(uint256) {
    	 for(uint i=0;i<time;i++)
        {
            principle+=(principle*rate)/100;
        }
        return principle;
        
        
    }
    
  function reqLoan(uint256 principle, uint rate, uint time) public returns(bool correct) {
        uint256 toPay = getCompoundInterest(principle, rate, time);
        loans[msg.sender]=toPay;
        emit Request(msg.sender,principle,rate,time,toPay);
        return true;
    }
    
  function getOwnerBalance() public view returns(uint256) {
		return getBalance(Owner);
    }
    
  function viewDues(address addr) public view isOwner returns(uint256)  {
	    return loans[addr];
	  }
	
  function settleDues(address addr) public isOwner returns(bool){
	    uint due=viewDues(addr);
	    //uint bal=getOwnerBalance();
	   bool good= sendCoin(addr,due,Owner);
	   if(good)
        {
            loans[addr]=0;
            return true;
        }
        else
        return false;
	  }
     
    
    
}

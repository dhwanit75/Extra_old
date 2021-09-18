# Write a program that takes some data as string input. Then it tries to find a positive number x such that 
# when x is appended to the end of the string, the SHA256 hash of this new string is less than the target, which is
# 0x00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
# Also print the time it takes to get this nonce value. 




import hashlib
import time
string=input()
start_time = time.time()
val="0x00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
val1=int(val,16)
t=1
print("Target Value : %s" %(val))
while 1 :
  s2=string+str(t)
  encoded=s2.encode()
  result = hashlib.sha256(encoded)
  g=result.hexdigest()
  d=int(g,16)
  if d<val1 :
    break
  t+=1
print("Time taken to find the value : %s seconds" % (time.time() - start_time))
print("The required number x to add to the string is : %d" %(t))
print("The string after adding the value : %s" %(s2))
print("The equivalent hexadicamal value of the required string = %s" %(g))


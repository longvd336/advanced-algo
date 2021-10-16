import math
  
def lcm (a, b):

    s = int(a)
    s1 = int(b)
  
    mul = s * s1
  
    gcd = math.gcd(s, s1)

    lcm = mul // gcd
  
    return lcm

if __name__ == '__main__':

    test = int(input())
    while test:
        a = int(input())
        b = int(input())
        print(lcm(a, b))
        print("\n")
        test-=1
  
    
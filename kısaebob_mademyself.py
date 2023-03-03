#ebob yapımı
def ebob(a,b):
    ebob = 1
    bob = []
    while True:
        if (a%ebob == 0) and (b %ebob == 0):
            bob.append(ebob)
        ebob +=1
        if (ebob == a+1) or (ebob==b+1):
            break
    return max(bob)

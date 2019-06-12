def sec_smallest(d,s):
    strt = 10**(d-1)
    list1 = []
    while(strt < 10**d):
        rem = strt
        num_sum = 0
        while rem>= 10:
            num_sum += rem % 10
            rem //= 10
        num_sum += rem
        if num_sum == s:
            list1.append(strt)
        if len(list1) == 2:
            break
        strt += 1
    print(list1[1])

def main():
    m = int(input())
    n = int(input())
    sec_smallest(m,n)

main()

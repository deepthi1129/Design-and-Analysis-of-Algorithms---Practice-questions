def rabinkarp(inputtext,patterntosearch):
    M=len(patterntosearch)
    N=len(inputtext)
    q=M+N
    d=10 #let be any assumed value
    p=0
    t=0
    h=1 
    for i in range(M-1):
        h=(h*d)%q
    for i in range(M):
        p=(d*p+ord(patterntosearch[i]))%q
        t=(d*t+ord(inputtext[i]))%q
    for i in range(N-M+1):
        if p==t:
            for j in range(M):
                if inputtext[i+j]!=patterntosearch[j]:
                    break
                else:
                    j+=1 
            if j==M:
                print("Pattern occurs with shift",i+1)
        if i<N-M:
            t=(d*(t-ord(inputtext[i])*h)+ord(inputtext[i+M]))%q
            if t<0:
                t=t+q
inputtext=input()
patterntosearch=input()
rabinkarp(inputtext,patterntosearch)

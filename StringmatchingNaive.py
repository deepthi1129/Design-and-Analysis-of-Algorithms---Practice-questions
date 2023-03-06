def strmatch(textinput,tosearch):
    #find length of parameters taken
    x=len(textinput)
    y=len(tosearch)
    
    #looping construct
    for i in range(x-y+1):
        j=0 #counter to iterate through sequence till length 
            #to check does not exceed length of pattern to be searched
        while(j<y):
            if(textinput[i+j]!=tosearch[j]):
                break
            j=j+1 #increment counter
        if(j==y):
            print("Pattern occurs with shift",i+1)

textinput=input()
tosearch=input()
strmatch(textinput,tosearch)
print("done")

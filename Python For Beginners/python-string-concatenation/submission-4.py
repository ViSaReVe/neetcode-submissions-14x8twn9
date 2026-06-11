def concatenate(s1: str, s2: str) -> str:
    pass
    str3 = s1 + s2
    
    if len(str3)>10:
        return "Too Long"
    else: 
        return str3



# do not modify below this line
print(concatenate("He", "llo"))
print(concatenate("Hello ", "world!"))
print(concatenate("Length", "of10"))

def remove_fourth_character(word: str) -> str:
    pass
    new_str1 = word[:4]
    new_str2 = word[5:]
    return new_str1 + new_str2


# do not modify below this line
print(remove_fourth_character("NeetCode"))
print(remove_fourth_character("Hello"))

from typing import List

def read_integers() -> List[int]:
    line = input()

    return [int(x) for x in line.split(",")]
    

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
import os

basepath = "."
folderList = []
with os.scandir(basepath) as parentName:
    for folName in parentName:
        if not folName.is_file():
            if folName.name != '.vscode' and folName.name != '.git':
                folderList.append(folName.name)

folderList.sort()
doc = open('document.md', 'w')
print(folderList)
index = 1
index2 = 1
for folName in folderList:
    with os.scandir(f"{folName}") as dirName:
        print(dirName)
        doc.write(f'''
## Assignment {index2}
''')
        index2 += 1
        for fileName in dirName:
            question = open(fileName)
            data = question.read()
            doc.write(f'''
### Question {index}
```c
{data}
```
''')
            question.close()
            index += 1
        index = 1
doc.close()


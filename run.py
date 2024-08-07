from os import system as sysc

sysc('cp main.cpp build/.')
sysc('mv build/main.cpp build/main.ino')
sysc('make -C build/') # компилируем
sysc('make -C build/ upload') # заносим в ардуино

# удаляем лишнее
sysc('rm build/main.o')


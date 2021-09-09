$ls
linked_list_sort.c linked_list_sort_main.c linked_list.h
 
$gcc -c -o main.o main.cpp
$gcc -c -o sum.o sum.cpp
 
$gcc -o main main.o sum.o
$ls
main main.o sum.o main.cpp sum.cpp sum.h

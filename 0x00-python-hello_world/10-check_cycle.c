#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
★ check_ cycle - checks if list is cyelical
* elist: pointer to list to check
* Return: 1 if cyclical, 0 otherwise
*/ 
int check_cycle (listint_t *list)
listint_t *glow = list, *fast = list;
while（fast && East->next）
slow = slow->next;
fast = fast->next-›next;
if （alow == faat）
return (1);
}
return(0);
}

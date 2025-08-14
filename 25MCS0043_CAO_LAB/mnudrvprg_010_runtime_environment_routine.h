#include"stdio.h"
#include"helloworld_srl.h"
#include"helloworld_prl.h"
#include"ret_et_helloworld.h"
#include"ret_tid_helloworld.h"
#include"ret_practice.h"


int fn_mnudrvprg_010_parallel_constract()
{
	int choice;

	while (1)
	{
		printf("#######################\n");
		printf("List of choices\n");
		printf("0:exit\n");
		printf("1:serial\n");
		printf("2:parallel\n");
		printf("#######################\n");
		printf("Enter your choice\n");
		scanf_s("%d", &choice);
		if (choice == 0)
		{
			printf("you choose to exit\n");
			break;
		}
		switch (choice)
		{
		case 1:
		{
			printf("This is output of Hello world serial\n");
			fn_helloworld_srl();
			break;
		}
		case 2:
		{
			printf("This is output of Hello world parallel\n");
			fn_helloworld_prl();
			break;
		}

		default:
		{
			printf("wrong choice\n");
			break;
		}
		}

	}

	return 0;
}
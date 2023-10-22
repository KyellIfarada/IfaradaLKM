#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/signal.h>
#include <linux/list.>
#include <stdio.h>
#include <linux/printk.h>
#include <linux/moduleparam.h>
#include <unistd.h>
#include <lib/vsprintf.c>
#include <kern_levels.h>



struct list_head {
    struct list_head *next, *prev;
};





// Potential
// struct task_struct
struct task_struct {
    char PROCESS[100];
    int PID;
    char STATE[100];
    char PRIO[100];
    char ST_PRIO[100];
    char NORM_PRIO[100];
    struct list_head head;

};

struct CHILD_NODE{
    char PROCESS[100];
    int PID;
    char STATE[100];
    char PRIO[100];
    char ST_PRIO[100];
    char NORM_PRIO[100];
    struct  task_struct CHILD;
    struct  task_struct PARENT;
    struct list_head head;

    };
struct PARENT_NODE{
    char PROCESS[100];
    int PID;
    char STATE[100];
    char PRIO[100];
    char ST_PRIO[100];
    char NORM_PRIO[100];
    struct  task_struct CHILD;
    struct list_head head;

};



int printk(KERN_INFO  "Enter User Input for PID Benchmark:\n");

int Userinput;

vscanf("%d", &Userinput);

// Declare value for PID
static int pid_param = 0;
int module_param(pid_param,size_t int,0);

static int process_characteristics_init(void) {
    struct task_struct *processtask;
    int count;
    list_entry(&processtask, ,);

// struct list_head
// list_for_each
// list_entry

// Initialize List.



struct list_head head = LIST_HEAD_INIT(processtask)

//Traverse LinkedList of PIDS
    for_each_process(processtask)
    {
        if (processtask->PID > pid_param) {

            printk(KERN_INFO
            "PROCESS: %s\n", processtask->PROCESS);
            printk(KERN_INFO
            "PID: %d\n", processtask->PID);
            printk(KERN_INFO
            "State: %ld\n", processtask->STATE);
            printk(KERN_INFO
            "PRIO: %d\n", processtask->PRIO);
            printk(KERN_INFO
            "ST_PRIO: %d\n", processtask->ST_PRIO);
            printk(KERN_INFO
            "NORM_PRIO: %d\n", processtask->NORM_PRIO);

             list_for_each_entry_continue_reverse(processtask, head, member)
                  for (processtask = list_prev_entry(processtask, member))
                   !list_entry_is_head(processtask, head, member)
                      CHILD_NODE->PARENT = list_prev_entry(processtask, member))



            list_for_each_entry_from(processtask, head, member)
	        for ( !list_entry_is_head(processtask, head, member)
	                 PARENT_NODE->CHILD = list_next_entry(processtask, member))




            //Show parent Process details
            printk(KERN_INFO
            "PARENT: %s\n", processtask->PARENT->CHILD_NODE);
            printk(KERN_INFO
            "PARENT PID: %d\n", processtask->PARENT->PID);

            // Show Child Process details

            list_for_each_entry( CHILD_NODE, struct CHILD_NODE, processtask)
            {
                printk(KERN_INFO
                "Child Process Name: %s\n", CHILD_NODE->PROCESS);
                printk(KERN_INFO
                "Child PID: %d\n", CHILD_NODE->PID)
            }

            }

        }


    }
static void __exit process_characteristics_exit(void) {printk(KERN_INFO "\"Exiting...\\n");

}
module (process_characteristics_init);
module_exit(process_characteristics_exit);


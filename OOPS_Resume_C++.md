# OOPS : 

## Q) What are the main features of OOPs?

- Inheritance
- Encapsulation
- Polymorphism
- Data Abstraction

## Q)  What is a class?

> A class is simply a representation of a type of object. It is the blueprint/plan/template that describes the details of an object.

## Q) What is Encapsulation?

> Encapsulation is an attribute of an object, and it contains all data which is hidden. That hidden data can be restricted to the members of that class.
Levels are Public, Protected, Private, Internal, and Protected Internal.

- This concept is also often used to hide the internal representation, or state, of an object from the outside. This is called information hiding. The general idea of this mechanism is simple. If you have an attribute that is not visible from the outside of an object, and bundle it with methods that provide read or write access to it, then you can hide specific information and control access to the internal state of the object.

- If you’re familiar with any object-oriented programming language, you probably know that these methods as getter and setter methods. As the names indicate, a getter method retrieves an attribute, and a setter method changes it. Depending on the methods that you implement, you can decide if an attribute can be read and changed, or if it’s read-only, or if it is not visible at all. (basically encapsulation saari cheeze ko ek saath rakhna hota hai, and controlling the access to those things ! )

## Q)What is Polymorphism?

> Polymorphism is nothing but assigning behavior or value in a subclass to something that was already declared in the main class. Simply, polymorphism takes more than one form.

- Polymorphism basically means for something to take more than one form . There are 2 types of polymorphism , one is COMPILE TIME POLYMORPHISM or OVERLOADING , what it means is that we can have the same fucntion but with different arguments and behaiviour , let's say I make a function that adds 2 no.s , now I can overload it to support 3 no.s or numbers of different data types !

- The second is RUN TIME POLYMORPHISM or OVERRIDING . A single base class can behave differently according to its objects . Like let's say I have a base class Cars , with a function ENGINE() , and class Tesla and class Ferrari inherits CAR. Now , Tesla and Ferrari can take to themselves to define how thier own ENGINE works , so even tho they both are CARS , their engine behaves differently . (Polymorphism bahut imp hai !)



## Q) What is Inheritance?

> Inheritance is a concept where one class shares the structure and behavior defined in another class. If Inheritance applied to one class is called Single Inheritance, and if it depends on multiple classes, then it is called multiple Inheritance. 

- There are different types of inheritence , multi-level , multiple , hierarchical , hybrid , etc . Inheritance is used to reduce redundancy in code (baar baar same hi cheez ko likhna avoid karna ) . 

## Q)What is an abstraction?

> Abstraction is a useful feature of OOPS, and it shows only the necessary details to the client of an object. Meaning, it shows only required details for an object, not the inner constructors, of an object. Example – When you want to switch on the television, it is not necessary to know the inner circuitry/mechanism needed to switch on the TV. Whatever is required to switch on TV will be shown by using an abstract class.

-  Making coffee with a coffee machine is a good example of abstraction. You need to know how to use your coffee machine to make coffee. You need to provide water and coffee beans, switch it on and select the kind of coffee you want to get.The thing you don’t need to know is how the coffee machine is working internally to brew a fresh cup of delicious coffee. You don’t need to know the ideal temperature of the water or the amount of ground coffee you need to use.Someone else worried about that and created a coffee machine that now acts as an abstraction and hides all these details. You just interact with a simple interface that doesn’t require any knowledge about the internal implementation. ( yeh example yaad rakhna and you'll never get confused about abstraction )


## Q) What is the difference between structure and a class?

> The default access type of a Structure is public, but class access type is private. A structure is used for grouping data, whereas a class can be used for grouping data and methods. Structures are exclusively used for data, and it doesn’t require strict validation, but classes are used to encapsulate and inherent data, which requires strict validation.

## Q)  What is a virtual function?

- A virtual function is a member function of a class, and its functionality can be overridden in its derived class. This function can be implemented by using a keyword called virtual, and it can be given during function declaration.

- A virtual function can be declared using a token(virtual) in C++. It can be achieved in C/Python Language by using function pointers or pointers to function.

## Q) What is dynamic or run time polymorphism?

> Dynamic or Run time polymorphism is also known as method overriding in which call to an overridden function is resolved during run time, not at the compile time. It means having two or more methods with the same name, same signature but with different implementation.


# C++

> - Refer this website all questions [Link here ](https://www.javatpoint.com/cpp-interview-questions) 
(All 39 Questions )


# Based on your Resume 

#### Q) Tell me about your experience in TECHCITI TECHNOLOGIES .

#### Q) What were the Front-End and Back-End Technologies you worked on during your internship ? 

#### Q) What were the challenges Faced by you when you were in your Internship ? 

#### Q) Tell me something about your projects that you had worked on ? 

#### Q) Why did you work on that project ? 

#### Q) What were the challenges you faced ?

Refer this for project answer format (WHY,WHAT,HOW)  this [Link here ](https://github.com/Hussain008/Spotlight/blob/master/projectthou8s.md)


# OS

> - [Last Minute Overall Notes on OS](https://www.geeksforgeeks.org/last-minute-notes-operating-systems/)
- [Most Frequently asked Questions in OS](https://www.javatpoint.com/operating-system-interview-questions)
- OS lectures [Playlist-I](https://www.youtube.com/playlist?list=PLxCzCOWd7aiGz9donHRrE9I3Mwn6XdP8p) or [Playlist-II](https://www.youtube.com/playlist?list=PLmXKhU9FNesSFvj6gASuWmQd23Ul5omtD)



#### Q) What is the difference between process and program?
> A program while running or executing is known as a process.

#### Q) What is a Thread? What are the differences between process and thread?

> A thread is a single sequence stream within in a process. Because threads have some of the properties of processes, they are sometimes called lightweight processes. Threads are popular way to improve application through parallelism. For example, in a browser, multiple tabs can be different threads. MS word uses multiple threads, one thread to format the text, other thread to process inputs, etc.
A thread has its own program counter (PC), a register set, and a stack space. Threads are not independent of one other like processes as a result threads shares with other threads their code section, data section and OS resources like open files and signals.

#### Q) What are the different states of a process?

A list of different states of process:

- New Process
- Running Process
- Waiting Process
- Ready Process
- Terminated Process

#### Q) What are the different scheduling algorithms
- First-Come, First-Served (FCFS) Scheduling.
- Shortest-Job-Next (SJN) Scheduling.
- Priority Scheduling.
- Shortest Remaining Time.
- Round Robin(RR) Scheduling.
- Multiple-Level Queues Scheduling.


#### Q) What are the necessary conditions for deadlock?
- Mutual Exclusion: There is a resource that cannot be shared.
- Hold and Wait: A process is holding at least one resource and waiting for another resource which is with some other process.
- No Preemption: The operating system is not allowed to take a resource back from a process until process gives it back.
- Circular Wait:  A set of processes are waiting for each other in circular form.

#### Q) What is semaphore?
> Semaphore is a protected variable or abstract data type that is used to lock the resource being used. The value of the semaphore indicates the status of a common resource.

There are two types of semaphore:
- Binary semaphores
- Counting semaphores

#### Q) What is a binary Semaphore?
> Binary semaphore takes only 0 and 1 as value and used to implement mutual exclusion and synchronize concurrent processes.


#### Q) What is Thrashing?
> Thrashing is a situation when the performance of a computer degrades or collapses. Thrashing occurs when a system spends more time processing page faults than executing transactions. While processing page faults is necessary to in order to appreciate the benefits of virtual memory, thrashing has a negative affect on the system. As the page fault rate increases, more transactions need processing from the paging device. The queue at the paging device increases, resulting in increased service time for a page fault . Thrashing is a phenomenon in virtual memory scheme when the processor spends most of its time in swapping pages, rather than executing instructions.

#### Q) What is Belady’s Anomaly?
> Bélády’s anomaly is an anomaly with some page replacement policies where increasing the number of page frames results in an increase in the number of page faults. It occurs with First in First Out page replacement is used. Belady's Anomaly is also called FIFO anomaly. Usually, on increasing the number of frames allocated to a process virtual memory, the process execution is faster, because fewer page faults occur. Sometimes, the reverse happens, i.e., the execution time increases even when more frames are allocated to the process. This is Belady's Anomaly. This is true for certain page reference patterns.


#### Q) What is Virtual Memory? How is it implemented?
> Virtual memory creates an illusion that each user has one or more contiguous address spaces, each beginning at address zero. The sizes of such virtual address spaces is generally very high.
The idea of virtual memory is to use disk space to extend the RAM. Running processes don’t need to care whether the memory is from RAM or disk. The illusion of such a large amount of memory is created by subdividing the virtual memory into smaller pieces, which can be loaded into physical memory whenever they are needed by a process.



#### Q) What is the use of paging in operating system?
> Paging is used to solve the external fragmentation problem in operating system. This technique ensures that the data you need is available as quickly as possible.

#### Q) What is the concept of demand paging?
> Demand paging specifies that if an area of memory is not currently being used, it is swapped to disk to make room for an application's need.



# Top SQL Queries 

> [Click here](https://www.edureka.co/blog/interview-questions/sql-query-interview-questions)

# Top HR Questions 

> [Click here](https://www.javatpoint.com/job-interview-questions)

# Must Do Coding Questions

> [Click here](https://www.geeksforgeeks.org/must-do-coding-questions-for-companies-like-amazon-microsoft-adobe/)


<div align="center">

# Data Structures & Algorithms in C

A topic-wise collection of C implementations for practicing core data structures and algorithms.

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Topics](https://img.shields.io/badge/Topics-7-2ea44f?style=for-the-badge)
![Programs](https://img.shields.io/badge/C%20Programs-29-blue?style=for-the-badge)

</div>

---

## About

This repository contains C programs covering fundamental data structures and algorithms. The implementations are organized into folders by topic to make learning, revision, and navigation easier.

## Repository Contents

| Folder | Programs |
|---|---|
| `01_Arrays/` | `binary_search.c`, `linear_search.c`, `display elements, find max,min , linear search.c`, `insertion,deletion,traversal.c` |
| `02_Sorting/` | `BubbleSort.c`, `Insertion_sort.c`, `Merge_Sort.c`, `Quick_Sort.c`, `selection_sort.c` |
| `03_Linked_Lists/` | `singly_linked_list.c`, `insertion and deletion in linked list.c`, `doubly linked list.c`, `circular linked list.c` |
| `04_Stacks_Queues/` | `stacks using arrays.c`, `Stack_using_LL.c`, `queue.c`, `Queue_using_LL.c`, `CircularQueue.c` |
| `05_Trees/` | `binary_tree.c`, `Traversal_BinaryTree.c`, `BinarySearchTree.c`, `BSTsearch.c`, `BST_insertion.c`, `BST_Deletion.c`, `AVL_Tree.c` |
| `06_Graphs/` | `Creating_graph_Basic.c`, `bfs.c`, `dfs.c` |
| `07_Recursion/` | `Tower_of_Hanoi.c` |

## Getting Started

### Prerequisites

Install a C compiler such as GCC. Check that it is available:

```bash
gcc --version
```

### Compile and run a program

Run commands from the repository's root directory. For example, to compile the binary search program:

```bash
gcc "01_Arrays/binary_search.c" -o binary_search
```

Run on Windows PowerShell:

```powershell
.\binary_search.exe
```

Run on Linux or macOS:

```bash
./binary_search
```

### Tower of Hanoi

The Tower of Hanoi program uses the `pow()` function from the math library. Compile it with `-lm`:

```bash
gcc "07_Recursion/Tower_of_Hanoi.c" -o tower_of_hanoi -lm
```

## Learning Focus

- Implementing common data structures in C.
- Practicing searching, sorting, insertion, deletion, and traversal.
- Understanding linked lists, stacks, queues, trees, and graphs.
- Strengthening programming fundamentals and problem-solving skills.

## Notes

- Each source file is a separate C program and should be compiled individually.
- The repository is a learning collection and may evolve as implementations are refined.
- Runtime behavior and algorithmic complexity depend on the particular implementation and input.

## Author

**Kamran Tariq**

- GitHub: [@kamran-bisati](https://github.com/kamran-bisati)
- LinkedIn: [Kamran Tariq](https://www.linkedin.com/in/kamran-tariq-995747361/)

---

<div align="center">

*Learning by implementing, one concept at a time.*

</div>

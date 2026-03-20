给我总结一下Cpp标准模板库的用法以及里面的所有函数

已阅读 10 个网页

C++标准模板库（STL）是一组泛型编程工具的集合，核心由**容器（Containers）**、**算法（Algorithms）** 和**迭代器（Iterators）** 三大组件构成[](https://cloud.tencent.cn/developer/article/2438666)。它提供了高效且可复用的数据结构和操作方法，是现代C++编程的基础。

由于STL包含的函数数量非常庞大（仅算法部分就有约100个[](https://next.oi-wiki.org/lang/csl/algorithm/)），无法在此一一列举。下面将为你系统地梳理STL的核心架构、常用容器及其关键成员函数，以及常用算法，帮助你建立起完整的知识框架。

### 📚 STL核心架构

STL的设计思想是将数据与操作分离，通过迭代器作为粘合剂，使算法能够独立于具体容器工作。

- **容器**：用于管理一组数据对象的类模板，如动态数组、链表、集合、映射等[](https://cloud.tencent.cn/developer/article/2438666)。

- **算法**：定义了约100种通用数据处理操作的函数模板，如查找、排序、计数等，它们通过迭代器操作容器中的元素[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。

- **迭代器**：一种行为类似指针的对象，提供统一的接口来遍历和访问容器中的元素[](https://developer.aliyun.com/article/1543437)[](https://cloud.tencent.cn/developer/article/2438666)。

### 📦 常用容器及关键成员函数

STL容器主要分为**序列式容器**和**关联式容器**，此外还有一些**容器适配器**。下表总结了最常用的容器及其核心操作函数：

#### 序列式容器

| 容器           | 核心特点                                                                                                                                                                                                                                  | 常用成员函数                                                                                                                                                                                                                                                                                                                                                                       | 所需头文件      |
| ------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------- |
| **`vector`** | 动态数组，元素在内存中连续存储，支持快速随机访问。在尾部增删元素效率高[](https://developer.aliyun.com/article/1658968)[](https://i10git.informatik.uni-erlangen.de/mohr/cpft/-/raw/cd68b9733a1c29cba8a69aa5ed148f0b7deba800/notebooks/06_STL_Sequence_Containers.ipynb)。 | `push_back()`, `pop_back()`, `insert()`, `erase()`, `clear()`, `size()`, `empty()`, `front()`, `back()`, `operator[]`, `at()`[](https://developer.aliyun.com/article/1483539)[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html)                                                                                                                          | `<vector>` |
| **`deque`**  | 双端队列，在内存中分段连续，支持快速随机访问。在头尾两端增删元素效率都很高[](https://developer.aliyun.com/article/1658968)[](https://cloud.tencent.cn/developer/article/2438666)。                                                                                          | `push_back()`, `pop_back()`, `push_front()`, `pop_front()`, `insert()`, `erase()`, `clear()`, `size()`, `empty()`, `front()`, `back()`, `operator[]`, `at()`[](https://developer.aliyun.com/article/1658968)[](https://developer.aliyun.com/article/1483539)[](https://cloud.tencent.cn/developer/article/2438666)                                                           | `<deque>`  |
| **`list`**   | 双向链表，元素在内存中不连续。不支持随机访问，但任何位置的插入和删除操作都非常高效[](https://developer.aliyun.com/article/1658968)[](https://cloud.tencent.cn/developer/article/2438666)。                                                                                      | `push_back()`, `pop_back()`, `push_front()`, `pop_front()`, `insert()`, `erase()`, `clear()`, `size()`, `empty()`, `front()`, `back()`, `remove()`, `unique()`, `sort()`, `merge()`, `reverse()`[](https://developer.aliyun.com/article/1483539)[](https://cloud.tencent.cn/developer/article/2438666)[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html) | `<list>`   |
| **`string`** | 专门用于处理字符序列的动态数组，提供了丰富的字符串操作接口[](https://developer.aliyun.com/article/1658968)[](https://cloud.tencent.cn/developer/article/2438666)。                                                                                                  | `append()`, `insert()`, `erase()`, `replace()`, `find()`, `substr()`, `size()`, `c_str()`, `operator+`, `operator==`等[](https://developer.aliyun.com/article/1658968)[](https://cloud.tencent.cn/developer/article/2438666)                                                                                                                                                  | `<string>` |

#### 关联式容器

| 容器                  | 核心特点                                                                                                                                               | 常用成员函数                                                                                                                                                                                                                             | 所需头文件             |
| ------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------- |
| **`set`**           | 集合。元素值唯一，并按照一定的排序规则自动排序（默认升序）。底层通常用红黑树实现[](https://developer.aliyun.com/article/1658968)[](https://cloud.tencent.cn/developer/article/2438666)。    | `insert()`, `erase()`, `clear()`, `find()`, `count()`, `size()`, `empty()`, `lower_bound()`, `upper_bound()`[](https://developer.aliyun.com/article/1658968)[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html) | `<set>`           |
| **`map`**           | 映射。存储键值对（key-value），键唯一且自动按key排序。底层通常用红黑树实现[](https://developer.aliyun.com/article/1483539)[](https://cloud.tencent.cn/developer/article/2438666)。 | `insert()`, `erase()`, `clear()`, `find()`, `count()`, `size()`, `empty()`, `operator[]`（通过key访问或插入value）[](https://developer.aliyun.com/article/1483539)[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html)    | `<map>`           |
| **`unordered_set`** | 无序集合。元素值唯一，但无序。底层用哈希表实现，查找效率平均为常数时间[](https://cloud.tencent.cn/developer/article/2438666)。                                                         | 与 `set` 类似，但无 `lower_bound`/`upper_bound`。                                                                                                                                                                                         | `<unordered_set>` |
| **`unordered_map`** | 无序映射。键值对无序。底层用哈希表实现，查找效率平均为常数时间[](https://cloud.tencent.cn/developer/article/2438666)。                                                             | 与 `map` 类似，但无 `lower_bound`/`upper_bound`。                                                                                                                                                                                         | `<unordered_map>` |

#### 容器适配器

| 容器                   | 核心特点                                                                                                                              | 常用成员函数                                                                                                                                                                                                            | 所需头文件     |
| -------------------- | --------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------- |
| **`stack`**          | 栈。后进先出（LIFO）的数据结构，默认基于`deque`实现[](https://developer.aliyun.com/article/1483539)。                                                  | `push()`, `pop()`, `top()`, `empty()`, `size()`[](https://developer.aliyun.com/article/1483539)[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html)                                             | `<stack>` |
| **`queue`**          | 队列。先进先出（FIFO）的数据结构，默认基于`deque`实现[](https://developer.aliyun.com/article/1658968)[](https://developer.aliyun.com/article/1483539)。 | `push()`, `pop()`, `front()`, `back()`, `empty()`, `size()`[](https://developer.aliyun.com/article/1658968)[](https://developer.aliyun.com/article/1483539)[](https://cloud.tencent.cn/developer/article/2438666) | `<queue>` |
| **`priority_queue`** | 优先队列。元素按照优先级被取出，默认最大元素优先（最大堆），默认基于`vector`实现[](https://developer.aliyun.com/article/1658968)。                                     | `push()`, `pop()`, `top()`, `empty()`, `size()`[](https://developer.aliyun.com/article/1658968)[](https://codeforces.com/topic/131341/en6?locale=en)                                                              | `<queue>` |

> 所有标准容器都提供了如 `begin()`、`end()`、`size()`、`empty()`、`swap()` 等基础成员函数[](https://cs.smu.ca/~porter/csc/ref/stl/containers_mem_fun_dist.html)。

### ⚙️ 常用算法

STL算法主要包含在 `<algorithm>` 头文件中，部分数值算法在 `<numeric>` 中[](https://next.oi-wiki.org/lang/csl/algorithm/)。这些算法通过操作迭代器范围 `[first, last)` 来工作。

#### 非修改式序列操作

这些算法不会修改容器中的元素。

| 算法                        | 功能简述                                                                                                                                                                                 | 示例                                                              |
| ------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------- |
| **`find` / `find_if`**    | 在范围内查找第一个等于某个值（或满足某个条件）的元素，返回指向它的迭代器[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。 | `auto it = find(v.begin(), v.end(), 5);`                        |
| **`count` / `count_if`**  | 计算范围内等于某个值（或满足某个条件）的元素的个数[](https://codeforces.com/topic/131341/en6?locale=en)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。       | `int num = count_if(v.begin(), v.end(), isEven);`               |
| **`for_each`**            | 对范围内的每个元素执行指定操作[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                                                                      | `for_each(v.begin(), v.end(), print);`                          |
| **`search` / `find_end`** | 在一个范围内搜索另一个子序列[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                                                                                      | `auto it = search(v1.begin(), v1.end(), v2.begin(), v2.end());` |
| **`equal` / `mismatch`**  | 比较两个范围是否相等，或找出第一个不匹配的位置[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                                                              | `bool eq = equal(v1.begin(), v1.end(), v2.begin());`            |

#### 修改式序列操作

这些算法会修改容器中的元素内容，但不会改变容器大小（除非使用插入迭代器等适配器）。

| 算法                           | 功能简述                                                                                                                                                                                                | 示例                                              |
| ---------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------- |
| **`copy` / `copy_if`**       | 将范围内的元素复制到另一个范围[](https://codeforces.com/topic/131341/en6?locale=en)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                                | `copy(v1.begin(), v1.end(), v2.begin());`       |
| **`fill` / `fill_n`**        | 将范围内的每个元素设定为特定值[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                                                                                     | `fill(v.begin(), v.end(), 0);`                  |
| **`replace` / `replace_if`** | 将范围内满足条件的元素替换为新值[](https://cloud.tencent.cn/developer/article/2438666)。                                                                                                                             | `replace_if(v.begin(), v.end(), isOdd, 0);`     |
| **`reverse`**                | 反转范围内元素的顺序[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://codeforces.com/topic/131341/en6?locale=en)。                                                                                    | `reverse(v.begin(), v.end());`                  |
| **`rotate`**                 | 旋转范围内的元素[](https://codeforces.com/topic/131341/en6?locale=en)。                                                                                                                                      | `rotate(v.begin(), v.begin() + 2, v.end());`    |
| **`remove` / `remove_if`**   | “移除”范围内满足条件的元素（注意：并不改变容器大小，而是将未被移除的元素移到前面，返回新的逻辑结尾）[](https://developer.aliyun.com/article/1483539)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。 | `auto new_end = remove(v.begin(), v.end(), 3);` |
| **`unique`**                 | “去除”范围内**相邻的**重复元素（常与 `sort` 和 `erase` 配合使用实现容器去重）[](https://developer.aliyun.com/article/1483539)[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                 | `auto new_end = unique(v.begin(), v.end());`    |

#### 排序及相关操作

| 算法                                          | 功能简述                                                                                                                                                                                           | 示例                                                                        |
| ------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| **`sort`**                                  | 对范围内的元素进行排序（平均时间复杂度O(N log N)），需要随机访问迭代器[](https://developer.aliyun.com/article/1658968)[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                      | `sort(v.begin(), v.end());` 或 `sort(v.begin(), v.end(), greater<int>());` |
| **`stable_sort`**                           | 稳定排序，保持相等元素的原始相对顺序[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                                                                                            | `stable_sort(v.begin(), v.end());`                                        |
| **`partial_sort`**                          | 部分排序，使得范围中前 `middle-first` 个元素是整个范围内最小的，并有序[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                                                    | `partial_sort(v.begin(), v.begin() + 5, v.end());`                        |
| **`nth_element`**                           | 重排元素，使得第n个位置上的元素是排序后应该在此位置的元素，且它左边的元素都不大于它，右边的都不小于它[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                                                           | `nth_element(v.begin(), v.begin() + 3, v.end());`                         |
| **`binary_search`**                         | 在**已排序**的范围内二分查找某个值，返回 `true` 或 `false`[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://cloud.tencent.cn/developer/article/2438666)。                                                 | `bool found = binary_search(v.begin(), v.end(), 5);`                      |
| **`lower_bound`**                           | 在**已排序**的范围内，返回指向第一个 **大于等于** 给定值的元素的迭代器[](https://developer.aliyun.com/article/1483539)[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://codeforces.com/topic/131341/en6?locale=en)。 | `auto it = lower_bound(v.begin(), v.end(), 5);`                           |
| **`upper_bound`**                           | 在**已排序**的范围内，返回指向第一个 **大于** 给定值的元素的迭代器[](https://developer.aliyun.com/article/1483539)[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://codeforces.com/topic/131341/en6?locale=en)。   | `auto it = upper_bound(v.begin(), v.end(), 5);`                           |
| **`merge`**                                 | 合并两个**已排序**的范围，结果存储到另一个范围中[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                                                                                    | `merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));`   |
| **`min_element` / `max_element`**           | 返回范围内最小或最大元素的迭代器[](https://codeforces.com/topic/131341/en6?locale=en)[](https://www.open-std.org/JTC1/SC22/wg21/docs/wp/html/sep94/lib-algorithms.html#lib.alg.copy)。                          | `auto minIt = min_element(v.begin(), v.end());`                           |
| **`next_permutation` / `prev_permutation`** | 将范围变换为下一个（或上一个）字典序排列[](https://next.oi-wiki.org/lang/csl/algorithm/)[](https://codeforces.com/topic/131341/en6?locale=en)。                                                                     | `next_permutation(v.begin(), v.end());`                                   |

#### 数值算法

这些算法定义在 `<numeric>` 头文件中。

| 算法                        | 功能简述                                                                                                                                  | 示例                                                              |
| ------------------------- | ------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------- |
| **`accumulate`**          | 计算范围内元素的累加和（或通过自定义二元操作计算）[](https://codeforces.com/topic/131341/en6?locale=en)[](https://cloud.tencent.cn/developer/article/2438666)。 | `int sum = accumulate(v.begin(), v.end(), 0);`                  |
| **`partial_sum`**         | 计算范围的前缀和，并将结果写入目标范围[](https://next.oi-wiki.org/lang/csl/algorithm/)。                                                                  | `partial_sum(v.begin(), v.end(), back_inserter(prefix_sums));`  |
| **`inner_product`**       | 计算两个范围的内积[](https://www.boost.io/doc/libs/1_84_0/libs/msm/doc/HTML/ch11.html#d0e4426)。                                                | `int dot = inner_product(v1.begin(), v1.end(), v2.begin(), 0);` |
| **`adjacent_difference`** | 计算范围内相邻元素的差值[](https://www.boost.io/doc/libs/1_84_0/libs/msm/doc/HTML/ch11.html#d0e4426)。                                             | `adjacent_difference(v.begin(), v.end(), diffs.begin());`       |

### 💡 使用小贴士

- **`size()`与`capacity()`**：对于 `vector` 和 `string`，`size()` 返回实际元素个数，`capacity()` 返回在需要重新分配内存前能容纳的元素个数[](https://i10git.informatik.uni-erlangen.de/mohr/cpft/-/raw/cd68b9733a1c29cba8a69aa5ed148f0b7deba800/notebooks/06_STL_Sequence_Containers.ipynb)。了解这一点有助于编写高性能代码。

- **迭代器失效**：在对容器进行插入或删除操作后，原有的迭代器可能会失效，需要格外小心[](https://developer.aliyun.com/article/1543437)。例如，在遍历 `vector` 并删除元素时，应使用 `erase` 返回的新迭代器。

- **算法与容器类型**：确保你使用的算法适用于该容器的迭代器类型。例如，`sort` 需要随机访问迭代器，因此不能用于 `list`（应使用 `list::sort` 成员函数）[](https://developer.aliyun.com/article/1543437)。

- **效率优先**：对于关联容器，使用它们自己的成员函数（如 `set::find`）通常比使用全局的 `std::find` 效率更高，因为成员函数能利用容器本身的内部结构[](https://next.oi-wiki.org/lang/csl/algorithm/)。

STL是一个博大精深的库，掌握其核心思想（容器、迭代器、算法）比死记硬背所有函数更为重要。理解了这三大组件如何协同工作，你就能够在使用时快速查阅具体细节，并写出简洁、高效、可维护的C++代码。

蓝桥杯比赛需要了解哪些

已阅读 10 个网页

针对蓝桥杯比赛，特别是你关心的C/C++组，需要掌握的知识体系可以分为**语言基础、数据结构、算法、数学**四大核心板块。这些知识点在不同组别（如大学B组、A组）的考察深度会有所区别[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。结合上一轮我们聊的STL，它在比赛中是**必须熟练掌握**的提效工具。

下面是为你梳理的蓝桥杯C/C++组核心知识体系：

### 🧱 核心知识体系

#### 📐 1. C/C++语言基础

这是解决问题的基石，需要做到熟练运用。

- **基本数据类型与运算**：`int`、`long long`（应对大整数）、`char`、`float`、`double`、`bool`，以及各类运算符（算术、逻辑、关系、位运算）[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **程序控制结构**：顺序、分支（`if-else`）、循环（`for`、`while`）的熟练嵌套与使用[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)。

- **数组与字符串**：一维/多维数组、字符数组和C++的`string`类（及其丰富成员函数）[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)。

- **函数与作用域**：函数的定义、参数传递、返回值、变量的作用域，以及递归函数的编写[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **结构体与类**：掌握结构体（`struct`）的定义和使用，了解类与对象（`class`）的初步概念[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)。

#### 🗃️ 2. 数据结构

用于高效地组织和访问数据。

- **线性表**：**数组**、**链表**（特别是STL中的`list`）、**栈**（`stack`）、**队列**（`queue`）和**优先队列**（`priority_queue`）的原理与应用[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **树形结构**：**二叉树**的概念、存储与遍历，以及更实用的**并查集**（用于处理集合合并与查找问题）[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

- **图形结构**：**图**的存储方式（邻接矩阵、邻接表），通常在解决更复杂的问题（如最短路径）时涉及[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **STL（标准模板库）**：这是重中之重，必须熟练掌握。上一轮我们详细聊过的`vector`、`set`、`map`、`stack`、`queue`等容器，以及`sort`、`next_permutation`等算法，能极大提升编码效率和准确性[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

#### ⚙️ 3. 算法

这是竞赛的核心，考察你如何设计和优化解题步骤。

- **基础算法**：**枚举**、**模拟**、**排序**（冒泡、选择、插入、快速、归并等）、**高精度计算**、**递推与递归**[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](http://www.tup.tsinghua.edu.cn/booksCenter/book_09424601.html)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **常见算法思想**：**二分查找**、**贪心算法**[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **搜索算法**：**深度优先搜索（DFS）**和**广度优先搜索（BFS）**，以及相关的剪枝优化技巧[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](http://www.tup.tsinghua.edu.cn/booksCenter/book_09424601.html)[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

- **动态规划（DP）**：这是难点也是重点，需要掌握**一维DP**、**背包问题**（0/1背包、完全背包），以及更进阶的**区间DP**、**树形DP**（通常A组要求）[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](http://www.tup.tsinghua.edu.cn/booksCenter/book_09424601.html)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)。

- **图论算法**：**最短路径**（Dijkstra、Floyd）、**最小生成树**（Prim、Kruskal）[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

- **字符串算法**：**KMP算法**等高效匹配算法[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)[](https://developer.baidu.com/article/detail.html?id=2820044)。

#### ➗ 4. 数学知识

很多题目背后都是数学问题。

- **数论基础**：质数判断、**埃氏筛/线性筛**、最大公约数（**辗转相除法**）、最小公倍数、同余定理[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)。

- **组合数学**：排列与组合的计算原理，以及用`next_permutation`生成全排列[](https://www.xiaomawang.cn/index.php?a=index&aid=232134&c=View&m=home)[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

- **其他**：模运算、快速幂[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

### 📊 知识点与组别对照

蓝桥杯不同组别的考察范围有明确区分，备考时要有针对性[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)：

| 组别           | 核心要求      | 代表性知识点                                         |
| ------------ | --------- | ---------------------------------------------- |
| **大学C组**     | **基础扎实**  | 枚举、模拟、基础的排序和搜索（DFS/BFS）、简单DP、基础数据结构（栈/队列）、基础数论 |
| **大学B组**     | **熟练应用**  | 在C组基础上，增加归并/快速排序、DFS剪枝、背包DP、并查集、最短路径/最小生成树     |
| **研究生/大学A组** | **深入与全面** | 在B组基础上，涉猎更复杂的字符串算法（如KMP）、图论问题、高级动态规划、概率论等      |

### 💡 备赛小贴士

1. **充分利用STL**：就像我们上次讨论的，在比赛中使用STL能帮你避免重复造轮子，把精力集中在算法逻辑上。例如，用`vector`代替普通数组，用`sort`实现高效排序，用`queue`进行BFS，这些都非常实用[](https://baike.baidu.com/item/%E8%93%9D%E6%A1%A5%E6%9D%AF%E7%AE%97%E6%B3%95%E5%85%A5%E9%97%A8(C%2FC%2B%2B)/65100526)[](https://www.shuimushuhui.com/book.html?isbn=9787302673972)。

2. **真题导向**：最好的老师就是**历年真题**。通过刷真题，你能直观地感受每个知识点在题目中是如何呈现的，以及出题的难度和风格[](http://www.tup.tsinghua.edu.cn/booksCenter/book_09424601.html)[](https://ses.ecut.edu.cn/f9/61/c2429a129377/page.htm)。

3. **实践出真知**：算法和数据结构光看懂没用，必须亲手敲出来，在在线评测系统（OJ）上通过编译和测试用例才算真正掌握。建议制定一个刷题计划，每周攻克一个算法主题[](https://cloud.tencent.cn/developer/article/2367684?from=15425)。

4. **了解评分规则**：蓝桥杯的编程题是按测试用例给分的。即使不能完全解出题目，也要尽力写出能通过部分简单数据的代码，争取拿“步骤分”[](https://mtoutiao.xdf.cn/www/153/202302/12845711.html)。

希望这份梳理能帮你更清晰地规划备赛路线。为了给你更具体的建议，方便告诉我你准备参加哪个组别（如大学B组）吗？这样我可以帮你进一步圈定复习重点。

我是说STL里的哪些内容是蓝桥杯比赛必要的

明白了！你问的是**STL里具体哪些内容在蓝桥杯比赛中必须掌握**。确实，STL库很庞大，但比赛常用的其实就那一二十个核心组件。

以下是**蓝桥杯必会的STL清单**，按重要性从高到低排序：

## 🔴 第一梯队：必须滚瓜烂熟（几乎每场必用）

### 1. `vector` - 动态数组

**使用场景**：代替普通数组，不确定数据规模时、需要频繁尾部插入时。

cpp

#include <vector>
vector<int> v;
v.push_back(10);     // 尾部添加
v.pop_back();        // 尾部删除
v.size();            // 大小
v.empty();           // 判空
v.clear();           // 清空
v[i];                // 随机访问（类似数组）
sort(v.begin(), v.end()); // 配合算法排序

**必会技巧**：二维vector的声明 `vector<vector<int>> vec(n, vector<int>(m));`

### 2. `string` - 字符串

**使用场景**：所有字符串处理题目。

cpp

#include <string>
string s = "hello";
s.length();          // 长度
s.substr(pos, len);  // 截取子串（重要！）
s.find("ll");         // 查找子串位置
s.append(" world");   // 追加
s += "!";             // 拼接
s.compare(t);         // 比较
stoi(s);              // string转int（C++11）
to_string(123);       // 数字转string

### 3. `sort` - 排序算法

**使用场景**：任何需要排序的地方。

cpp

#include <algorithm>
sort(a, a + n);                          // 数组排序
sort(v.begin(), v.end());                 // vector排序
sort(v.begin(), v.end(), greater<int>()); // 降序排序
// 自定义排序（重要！）
bool cmp(const Node& a, const Node& b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
sort(v.begin(), v.end(), cmp);

### 4. `queue` - 队列

**使用场景**：广度优先搜索（BFS）必备。

cpp

#include <queue>
queue<int> q;
q.push(1);           // 入队
q.pop();             // 出队
q.front();           // 取队首
q.back();            // 取队尾
q.empty();           // 判空
q.size();            // 大小

### 5. `stack` - 栈

**使用场景**：深度优先搜索（DFS）的迭代实现、括号匹配、表达式求值。

cpp

#include <stack>
stack<int> st;
st.push(1);          // 入栈
st.pop();            // 出栈
st.top();            // 取栈顶
st.empty();          // 判空

## 🟡 第二梯队：经常用到（提高解题效率）

### 6. `map` / `unordered_map` - 映射（字典）

**使用场景**：需要建立键值对关系时，如统计频率、建立"值→下标"的映射。

cpp

#include <map>
map<string, int> mp;
mp["apple"] = 5;                 // 插入/修改
cout << mp["apple"];              // 访问
mp.find("apple") != mp.end();      // 查找key是否存在
mp.count("apple");                 // 另一种判断存在的方法
// 遍历
for (auto& p : mp) {
    cout << p.first << " " << p.second << endl;
}

**重要区别**：

- `map`：有序（红黑树），遍历按key排序，查找O(logn)

- `unordered_map`：无序（哈希表），查找O(1)，蓝桥杯一般用这个更快

### 7. `set` / `unordered_set` - 集合

**使用场景**：需要去重、快速判断元素是否存在。

cpp

#include <set>
set<int> s;
s.insert(5);         // 插入
s.erase(5);          // 删除
s.find(5) != s.end(); // 判断存在
s.count(5);           // 存在返回1，不存在0

### 8. `priority_queue` - 优先队列（堆）

**使用场景**：贪心算法、Dijkstra最短路径、需要动态取最值的问题。

cpp

#include <queue>
priority_queue<int> pq;                    // 大顶堆（默认）
priority_queue<int, vector<int>, greater<int>> pq; // 小顶堆
pq.push(10);
pq.push(5);
pq.top();            // 取堆顶（最值）
pq.pop();            // 弹出堆顶

**自定义类型**：

cpp

struct Node {
    int x, y;
    friend bool operator < (Node a, Node b) {
        return a.x > b.x; // 注意：这里比较的是优先级，> 表示小顶堆
    }
};
priority_queue<Node> pq;

### 9. `pair` - 对组

**使用场景**：存储二元组，常与map、sort搭配。

cpp

#include <utility>
pair<int, int> p = {1, 2};
p.first = 1;
p.second = 2;
// 常见用法
vector<pair<int, int>> v;
v.push_back({x, y});
sort(v.begin(), v.end()); // 按first排序，相同再按second

## 🟢 第三梯队：特定场景的神器

### 10. `next_permutation` - 全排列

**使用场景**：需要枚举所有排列的问题（暴力解法）。

cpp

#include <algorithm>
vector<int> v = {1, 2, 3};
do {
    // 处理当前排列
    for (int x : v) cout << x << " ";
    cout << endl;
} while (next_permutation(v.begin(), v.end()));

**注意**：使用前需要先排序，否则无法生成所有排列。

### 11. `deque` - 双端队列

**使用场景**：需要在两端频繁操作时，比如滑动窗口问题。

cpp

#include <deque>
deque<int> dq;
dq.push_front(1);    // 头部插入
dq.push_back(2);     // 尾部插入
dq.pop_front();      // 头部删除
dq.pop_back();       // 尾部删除
dq.front();          // 取头部
dq.back();           // 取尾部

### 12. `algorithm` 常用函数

cpp

#include <algorithm>
max(a, b);            // 最大值
min(a, b);            // 最小值
swap(a, b);           // 交换
reverse(v.begin(), v.end()); // 反转
unique(v.begin(), v.end());  // 去重（常配合erase用）
lower_bound(v.begin(), v.end(), x); // 二分查找第一个≥x的位置
upper_bound(v.begin(), v.end(), x); // 二分查找第一个>x的位置
fill(v.begin(), v.end(), 0); // 填充
count(v.begin(), v.end(), x); // 计数x出现次数

## 🎯 蓝桥杯STL使用建议

### 必须掌握的搭配技巧

1. **去重三部曲**：
   
   cpp
   
   sort(v.begin(), v.end());
   v.erase(unique(v.begin(), v.end()), v.end());

2. **离散化**（常用于网格类问题）：
   
   cpp
   
   vector<int> all; // 存储所有出现的坐标
   sort(all.begin(), all.end());
   all.erase(unique(all.begin(), all.end()), all.end());
   // 然后用lower_bound找索引

3. **BFS模板**：
   
   cpp
   
   queue<pair<int, int>> q;
   q.push({sx, sy});
   while (!q.empty()) {
      auto [x, y] = q.front(); q.pop();
      // 四个方向扩展...
   }

### 避坑指南

- **迭代器失效**：遍历过程中插入/删除元素要特别小心

- **`map`的`[]`操作**：即使只是判断，`if (mp[key])`也会插入默认值！应该用`count`或`find`

- **`priority_queue`自定义比较**：默认是大顶堆，小顶堆用`greater<T>`

- **`auto`遍历**：不想修改用`const auto&`，想修改用`auto&`

### 你的必会清单

- **必须默写**：`vector`、`string`、`sort`、`queue`、`stack`

- **必须理解**：`map`、`set`、`pair`、`priority_queue`

- **可以查资料**：`next_permutation`、`deque`、`lower_bound`（知道存在就行，用的时候查）

这12个STL组件覆盖了蓝桥杯90%以上的使用场景，熟练掌握它们，你的编码效率会提升至少一倍！

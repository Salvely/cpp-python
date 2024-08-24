# cpp-python

a tiny python interpreter implemented in C++

## Features

## shell prompt 和 print 实现

- [ ] print
- shell prompt
- [ ] test script

## 注释和docstring处理

- comments
- docstring
- indentation

## primitive-type处理

- int
- float
- bool
    - True
    - False
- None

## 变量本身

- variable declaration
    - 下划线/字母+下划线/数字/字母
- python3中的Keywords:and, as, assert, break, class, continue, def, del, elif, else, except, False, finally, for, from,
  global, if, import, in, is, lambda, nonlocal, None, not, or, pass, raise, return, True, try, while, with, and yield.

## 表达式求值处理

- expressions: object + operator
    - +/-/*/普通除法：有一个是float，结果就是float
    - i % j:要求两个都是整数
    - i ** j: 有一个是float，结果就是float`
- 注意优先级问题，括号可以改变优先级
- boolean function
    - a and b
    - a or b
    - not a
- 同时赋值
- expression evaluation
    - +号被重载了
    - type checking
    - len()
    - indexing
    - slicing
    - input -> get a string
    - type casting（如`int()`)

## 条件分支

- 条件分支
    - if 语句
        - if + elif + else
    - 循环语句
        - while 语句
        - for 语句
            - for i in range()

## 函数定义及函数调用

- [ ] function definition def name(args=default_values):
  statement statement statement
- [ ] return expression
- [ ] lambda
- [ ] module的调用

## Non-primitive type处理

- [ ] 结构体和类
    - 类
        - 多层继承
        - 封装
    - 生成器实现
- class & object

## type 本身

type()函数实现

## 作用域问题

- [ ] scoping: 内部变量覆盖外部变量，内部函数替代外部函数
- [ ] 全局变量
- [ ] module 以及 import 语句
- [ ] module 的封装

## 文件读写

- [ ] 文件读写（P82面有全部接口）

## 异常处理

- [ ] 异常处理

## 数据结构支持

- list
- tuple
- set
- dict

## 其他函数库

- [ ] some math function

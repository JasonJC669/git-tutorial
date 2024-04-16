cmake_minimum_required (VERSION 3.12)
project (project LANGUAGES C CXX)

add_executable(main
  main.c
  foo1.c
  foo2.c
  fooInterrupt.c
  )
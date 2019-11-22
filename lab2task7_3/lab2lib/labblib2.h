#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_sorted(int parameter[], int numberofelements);

bool is_palindrome(char arr[], int size);

void deleteFrom(vector<string> &namedb);

void array_rows_cols(int* arr[], int cols, int rows);

void initialiseDatabase(vector<string> &namedb);

void insert(vector<string> &namedb);

bool is_palindrome(char arr[], int size);

bool is_sorted(int parameter[], int numberofelements);

void print(vector<string> &namedb);

void search(vector<string> &namedb);

void shrink_array(int arr[], int size);

void swap_sort(int& a, int& b, int& c, bool order);
#pragma once
#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
} Node;

typedef struct tagCircularQueue
{
	int Capacity;
	int Front;
	int Rear;

	Node* Nodes;
} CircularQueue;
#endif
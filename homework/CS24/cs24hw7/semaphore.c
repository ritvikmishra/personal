/*
 * General implementation of semaphores.
 *
 *--------------------------------------------------------------------
 * Adapted from code for CS24 by Jason Hickey.
 * Copyright (C) 2003-2010, Caltech.  All rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

#include "sthread.h"
#include "semaphore.h"

/*
 * The semaphore data structure contains TODO
 */
struct _semaphore {
    int i;
    /*
     * TODO: define the semaphore data struct, and update the above
     *       comment to properly reflect your changes.
     */
};

/************************************************************************
 * Top-level semaphore implementation.
 */

/*
 * Allocate a new semaphore.  The initial value of the semaphore is
 * specified by the argument.
 */
Semaphore *new_semaphore(int init) {
    /* Allocate memory for the new semaphore. */
    Semaphore *semp = (Semaphore *) malloc(sizeof(Semaphore));

    /* Set the intiial number of the semaphore. */
    semp->i = init;

    /*
     * TODO: allocate and initialize a semaphore data struct.
     */

    return semp;
}

/*
 * Decrement the semaphore.
 * This operation must be atomic, and it blocks iff the semaphore is zero.
 */
void semaphore_wait(Semaphore *semp) {
    /* TODO */
}

/*
 * Increment the semaphore.
 * This operation must be atomic.
 */
void semaphore_signal(Semaphore *semp) {
    /* TODO */
}


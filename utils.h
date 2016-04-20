#ifndef UTILS_H
#define UTILS_H

#include "postgres.h"
#include "nodes/relation.h"
#include "nodes/nodeFuncs.h"

typedef struct
{
	RelOptInfo *child;
	RelOptInfo *parent;
	int			sublevels_up;
} ReplaceVarsContext;

bool clause_contains_extern_params(Node *clause);

Node * replace_child_vars_with_parent_var(Node *node,
										  ReplaceVarsContext *context);

#endif

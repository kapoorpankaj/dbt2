/*
 * This file is released under the terms of the Artistic License.  Please see
 * the file LICENSE, included in this package, for details.
 *
 * Copyright (C) 2002 Mark Wong & Open Source Development Labs, Inc.
 *
 * 13 May 2003
 */

#ifndef _DRIZZLE_PAYMENT_H_
#define _DRIZZLE_PAYMENT_H_

#include "drizzle_common.h"

int execute_payment(struct db_context_t *dbc, struct payment_t *data);

#endif /* _DRIZZLE_PAYMENT_H_ */

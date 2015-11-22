/* Finit service monitor, task starter and generic API for managing svc_t
 *
 * Copyright (c) 2008-2010  Claudio Matsuoka <cmatsuoka@gmail.com>
 * Copyright (c) 2008-2015  Joachim Nilsson <troglobit@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef FINIT_SERVICE_H_
#define FINIT_SERVICE_H_

#include "svc.h"

void	  service_runlevel	 (int newlevel);
int	  service_register	 (int type, char *line, time_t mtime, char *username);
void      service_unregister     (svc_t *svc);
svc_cmd_t service_enabled	 (svc_t *svc, int event, void *arg);

int	  service_start	         (svc_t *svc);
int	  service_stop	         (svc_t *svc, int state);
void      service_start_dynamic  (void);
void      service_stop_dynamic   (void);
int       service_restart        (svc_t *svc);
int	  service_reload	 (svc_t *svc);
void      service_reload_dynamic (void);

#endif	/* FINIT_SERVICE_H_ */

/**
 * Local Variables:
 *  version-control: t
 *  indent-tabs-mode: t
 *  c-file-style: "linux"
 * End:
 */

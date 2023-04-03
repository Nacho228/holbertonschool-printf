#include <stdarg.h>
#include <stdio.h>
#include "main.h"

void minimal_printf(char *fmt, ...)
{
   va_list ap; 
   char *p, *sval;
   int ival;
   va_start(ap, fmt); 
  
   for (p = fmt; *p; p++) 
   {
      if (*p != '%') 
      {
         putchar(*p);
         continue;
      }
      switch (*++p) 
      {
         case 'c':
            ival = va_arg(ap, int);
            printf("%c", ival);
            break;
 	 case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
            putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
      }
   }
   va_end(ap); /* clean up when done */
}

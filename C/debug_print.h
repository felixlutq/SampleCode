#ifdef DEBUG
void debug_print(const char *format, ...)
{
  char strDest[256] = {0};
   va_list args;
   va_start( args, format );
   vsprintf( strDest, format, args );
   va_end( args );
}
#define DEBUG_PRINT debug_print
#else
    # define DEBUG_PRINT(...)
#endif

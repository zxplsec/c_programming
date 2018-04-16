char * strncpy (char * target, const char * source, size_t count)
{
  char *start = target;

  while (count && (*target++ = *source++))   
    count--;

  if (count)                             
    while (--count)
      *target++ ='\0';

  return (start);
}

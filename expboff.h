#ifndef EXPBOFF_H
#define EXPBOFF_H

/**
 * @param n The number of instances this event has occurred
 * @param lmin The lower threshold of the returned value
 * @param umax The upper threshold of the returned value
 * @return the backoff amount */
int expboff(int n, int lmin, int umax);

#endif /* EXPBOFF_H */

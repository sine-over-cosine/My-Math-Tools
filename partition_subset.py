
#built by Russell Tan
#if you find any weird names, that is because I ran out of names to use
from itertools import combinations 
def combinations_iter(lst):
  total=[]
  for length in range(1,len(lst)+1):
    comb = combinations(lst, length)
    for i in list(comb):
      total.append(list(i))
  return total
  
def subset_partition(master_lst):
    total_pairs=[] #this is the set which main function will act on
    #first get all the sample possible combinations
    sample=combinations_iter(master_lst)
    #remove the overall case
    if master_lst in sample:
        sample.remove(master_lst)
    for set_space in sample:
        #for each combination, we find its complement set
        complement=complement_set(master_lst,set_space)
        #we now need to obtain subsets
        subset_comp=combinations_iter(complement)
        for small_set in subset_comp:
            # pair with set_space
            whack=[]
            whack.append(set_space)
            whack.append(small_set)
            total_pairs.append(whack)
    return total_pairs
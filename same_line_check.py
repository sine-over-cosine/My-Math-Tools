def check_if_same_line(x1,y1,x2,y2,x3,y3,x4,y4):
  gradient1=(y1-y2)/(x1-x2)
  gradient2=(y3-y4)/(x3-x4)
  if gradient1!=gradient2:
    return False
  else:
    c1=y2-gradient1*x2
    c2=y4-gradient2*x4
    if c1==c2:
      return True
    else:
      return False


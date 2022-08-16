class board{
 public:
  void print();
  unsigned get_size() const {return size;}
 private:
  const unsigned size{7};
};

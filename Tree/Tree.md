# STL in C++

### Vector
  - **Syntax:**
      - vector<Data_Type> vName;
  - **Function Names:**
      - sort(v.begin(), v.end());
      - sort(uMp.begin(), uMp.end(), cmp);	bool cmp(pair<int,int>& a, pair<int,int>& b) { return a.second > b.second; }
      - insert<pair< , >>;
      - make_pair( , );
      - *max_element(a.begin(), a.end());
  - **Iterators:**
      - begin()		**–>**  *Returns an iterator pointing to the first element in the vector.*
      - end() 		**–>**	*Returns an iterator pointing to the theoretical element that follows the last element in the vector.*
      - rbegin() 	**–>**	*Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element.*
      - rend() 		**–>**	*Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end).*
  - **Capacity:**
      - size()		**–>**	*Returns the number of elements in the vector.*
      - capacity()	**–>**	*Returns the size of the storage space currently allocated to the vector expressed as number of elements.*
      - empty()		**–>**	*Returns whether the container is empty.*
      - resize(n,val)	**–>**	*Resizes the container so that it contains ‘n’ elements.*
      - shrink_to_fit()	**–>**	*Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.*
      - reserve()	**–>**	*Requests that the vector capacity be at least enough to contain n elements.*
  - **Element access:**
      - at(pos) 	**–>**	*Returns a reference to the element at position ‘g’ in the vector.*
      - front() 	**–>**	*Returns a reference to the first element in the vector.*
      - back() 		**–>**	*Returns a reference to the last element in the vector.*
      - data() 		**–>**	*Returns a direct pointer to the memory array used internally by the vector to store its owned elements.*
  - **Modifiers:**
      - assign(size,value)			**–>**	*It assigns new value to the vector elements by replacing old ones.*
      - push_back()				**–>**	*It push the elements into a vector from the back.*
      - pop_back()				**–>**	*It is used to pop or remove elements from a vector from the back.*
      - insert(position, val)			**–>**	*It inserts new elements before the element at the specified position.*
      - emplace()				**–>**	*It extends the container by inserting new element at position.*
      - emplace_back()				**–>**	*It is used to insert a new element into the vector container, the new element is added to the end of the vector.*
      - clear()					**–>**	*It is used to remove all the elements of the vector container.*
      - erase(pos) & erase(start_pos,end_pos)	**–>**	*It is used to remove elements from a container from the specified position or range.*
      - swap()					**–>**	*It is used to swap the contents of one vector with another vector of same type. Sizes may differ.*
	
### Set & Unordered Set
>  - **Set**
>    -  It is used to store the unique elements.
>    -  It stores the elements in increasing order.
>    -  We can traverse sets using iterators.
>    -  Sets are implemented using Binary search trees.
>    -  It is included in #include <set> header file.
>  - **Unordered Set**
>    - It is used to store the unique elements.
>    - It stores the element with no order.
>    - We can traverse unordered_set using iterators.
>    - It is implemented using hash table.
>    - It is included in #include <unordered_set> header file.
  - **Syntax:**
    - set<data_type> set_name;
    - unordered_set<data_type> name;
  - **Functions Name:**
    - at()	**–>**	*Returns the reference to the value with the element as key k.*
    - begin()	**–>**	*Returns an iterator pointing to the first element in the container.*
    - end()     **–>**	*Returns an iterator pointing to the position past the last element in the container.*
    - find()	**–>**	*Search for an element in the container.*
    - size()	**–>**	*Return the number of elements in the container.*
    - insert()	**–>**	*Insert a new element in the container.*
    - empty()	**–>**	*Check if an container is empty or not.*
    - erase()	**–>**	*Remove either a single element or a range of elements ranging from start(inclusive) to end(exclusive).*
    - clear()	**–>**	*Removes all of the elements from container.*
    - count()	**–>**	*Count occurrences of a particular element in container.*		

  ### Map & Unordered Map
  - **Syntax:**
    - map<Key, Value> mp;
    - unordered_map<Key, Value> umap;
  - **Function Name:**
    - at()			->	mp.at(Key)												    **–>**	*Returns the reference to the value with the element as key k.*
    - begin()			->	mp.begin()												**–>**	*Returns an iterator pointing to the first element in the container.*
    - end()			->	mp.end()												    **–>**	*Returns an iterator pointing to the position past the last element in the container.*
    - find()			->	if(mp.find(Key) != mp.end()) & auto it = mp.find(Key);	**–>**	*Returns iterator to the element.*
    - size()			->	mp.size()												**–>**	*Return the number of elements in the container.*
    - insert()		->	mp.insert({Key,Value})									    **–>**	*Insert elements with a particular key in the map container.*
    - pair_insert(,)	–>	mp.insert(make_pair(Key,Value))							**–>**	*Adds a new element to the map.*
    - empty()			->	if(mp.empty())											**–>**	*Checks whether the container is empty.*
    - erase()			->	mp.erase(Key) & mp.erase(it)							**–>**	*Erase elements in the container.*
    - clear()			–>	mp.clear()												**–>**	*Removes all the elements from the map.*
    - count()			->	mp.count(Key)											**–>**	*Count the number of elements present in an container with a given key.*

### String
- sort(str.begin(), str.end());
- erase(pos) & erase(start_pos,end_pos);
- resize(size_type num);
	 
	 
	 
	 
	 

--------------------------------------------------------------------------------
- Sort
- Reverse
- Swap

- isalnum() -->  int isalnum(char ch);
- isupper() -->  int isupper(int ch);
- islower() -->  int islower(int ch);
- isupper() -->  int tolower(int ch);
- islower() -->  int toupper(int ch);

- abs(int x);



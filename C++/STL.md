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
  - begin()	**–>**  *Returns an iterator pointing to the first element in the vector.*
  - end() 	**–>**	*Returns an iterator pointing to the theoretical element that follows the last element in the vector.*
  - rbegin() 	**–>**	*Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element.*
  - rend() 	**–>**	*Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end).*
- **Capacity:**
  - size()		**–>**	*Returns the number of elements in the vector.*
  - capacity()		**–>**	*Returns the size of the storage space currently allocated to the vector expressed as number of elements.*
  - empty()		**–>**	*Returns whether the container is empty.*
  - resize(n,val)	**–>**	*Resizes the container so that it contains ‘n’ elements.*
  - shrink_to_fit()	**–>**	*Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.*
  - reserve()		**–>**	*Requests that the vector capacity be at least enough to contain n elements.*
- **Element access:**
  - at(pos) 	**–>**	*Returns a reference to the element at position ‘g’ in the vector.*
  - front() 	**–>**	*Returns a reference to the first element in the vector.*
  - back() 	**–>**	*Returns a reference to the last element in the vector.*
  - data() 	**–>**	*Returns a direct pointer to the memory array used internally by the vector to store its owned elements.*
- **Modifiers:**
  - assign(size,value)				**–>**	*It assigns new value to the vector elements by replacing old ones.*
  - push_back()					**–>**	*It push the elements into a vector from the back.*
  - pop_back()					**–>**	*It is used to pop or remove elements from a vector from the back.*
  - insert(position, val)			**–>**	*It inserts new elements before the element at the specified position.*
  - emplace()					**–>**	*It extends the container by inserting new element at position.*
  - emplace_back()				**–>**	*It is used to insert a new element into the vector container, the new element is added to the end of the vector.*
  - clear()					**–>**	*It is used to remove all the elements of the vector container.*
  - erase(pos) & erase(start_pos,end_pos)	**–>**	*It is used to remove elements from a container from the specified position or range.*
  - swap()					**–>**	*It is used to swap the contents of one vector with another vector of same type. Sizes may differ.*

### List
- **Syntax:**
  - list<Data-Type> name_of_list;
- **Iterators:**	
  - begin()	**–>** 	*Returns an iterator pointing to the first element of the list.*
  - end()	**–>** 	*Returns an iterator pointing to the theoretical last element which follows the last element.*
  - rbegin()	**–>** 	*Returns a reverse iterator which points to the last element of the list.*
  - rend()	**–>** 	*Returns a reverse iterator that points to the position before the beginning of the list.*
- **Capacity:**
  - size()	**–>** 	*Returns the number of elements in the list.*
  - empty()	**–>** 	*Returns whether the list is empty(1) or not(0).*
- **Element access:**	
  - front()	**–>** 	*Returns the value of the first element in the list.*
  - back()	**–>** 	*Returns the value of the last element in the list.*
- **Modifiers:**	
  - push_front(g)	**–>** 	*Adds a new element ‘g’ at the beginning of the list.*
  - push_back(g)	**–>** 	*Adds a new element ‘g’ at the end of the list.*
  - pop_front()		**–>** 	*Removes the first element of the list, and reduces the size of the list by 1.*
  - pop_back()		**–>** 	*Removes the last element of the list, and reduces the size of the list by 1.*
  - assign()		**–>** 	*Assigns new elements to the list by replacing current elements and resizing the list.*
  - insert()		**–>** 	*Inserts new elements in the list before the element at a specified position.*
  - erase()		**–>** 	*Removes a single element or a range of elements from the list.*
  - clear()		**–>** 	*It is used to remove all the elements of the list container, thus making it size 0.*
  - remove()		**–>** 	*Removes all the elements from the list, which are equal to a given element.*
  - unique()		**–>** 	*Removes all duplicate consecutive elements from the list.*
  - reverse()		**–>** 	*Reverses the list.*
  - sort()		**–>** 	*Sorts the list in increasing order.*
  - swap()		**–>** 	*This function is used to swap the contents of one list with another list.*

### Vector vs List
> - **Vector**
>   - It has contiguous memory.
>   - It is synchronized.
>   - Vector may have a default size.
>   - In vector, each element only requires the space for itself only.
>   - Insertion at the end requires constant time but insertion elsewhere is costly.
>   - Vector is thread safe.
>   - Deletion at the end of the vector needs constant time but for the rest it is O(n).
>   - Random access of elements is possible.
>   - Iterators become invalid if elements are added to or removed from the vector.	
> - **List**
>   - While it has non-contiguous memory.
>   - While it is not synchronized.
>   - List does not have default size.
>   - In list, each element requires extra space for the node which holds the element, including pointers to the next and previous elements in the list.
>   - Insertion is cheap no matter where in the list it occurs.
>   - List is not thread safe.
>   - Deletion is cheap no matter where in the list it occurs.
>   - Random access of elements is not possible.
>   - Iterators are valid if elements are added to or removed from the list.


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
> - **Map**
>   - It is used to store elements as key,value pairs in order sorted by key.
>   - It is implemented by red-black tree.
>   - It is slow.
>   - Time complexity for operations is O(log N).
>   - It is define in  #include <map> header file
> - **Unordered Map**
>   - It is used to store elements as key,value pairs in non-sorted order.
>   - It is implemented using hash table.
>   - It is fast.
>   - Time complexity for operations is O(1).
>   - It is defined in #include <unordered_map> header file.  
  - **Syntax:**
    - map<Key, Value> mp;
    - unordered_map<Key, Value> umap;
  - **Function Name:**
    - at()			**–>**	mp.at(Key)						**–>**	*Returns the reference to the value with the element as key k.*
    - begin()			**–>**	mp.begin()						**–>**	*Returns an iterator pointing to the first element in the container.*
    - end()			**–>**	mp.end()						**–>**	*Returns an iterator pointing to the position past the last element in the container.*
    - find()			**–>**	if(mp.find(Key) != mp.end()) & auto it = mp.find(Key);	**–>**	*Returns iterator to the element.*
    - size()			**–>**	mp.size()						**–>**	*Return the number of elements in the container.*
    - insert()			**–>**	mp.insert({Key,Value})					**–>**	*Insert elements with a particular key in the map container.*
    - pair_insert(,)		**–>**	mp.insert(make_pair(Key,Value))				**–>**	*Adds a new element to the map.*
    - empty()			**–>**	if(mp.empty())						**–>**	*Checks whether the container is empty.*
    - erase()			**–>**	mp.erase(Key) & mp.erase(it)				**–>**	*Erase elements in the container.*
    - clear()			**–>**	mp.clear()						**–>**	*Removes all the elements from the map.*
    - count()			**–>**	mp.count(Key)						**–>**	*Count the number of elements present in an container with a given key.*

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



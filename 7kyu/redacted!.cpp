//Meanwhile... somewhere in a Pentagon basement

//Your job is to compare two confidential documents that have come into your possession.

//The first document has parts redacted, and the other one doesn't.

//But the original (unredacted) document might be a fake!

//You need to compare the two documents and decide if it is possible they are the same or not.
//Kata Task

//Return true if the two documents are possibly the same. Return false otherwise.
//Notes

//    Each document is made of any visible characters, spaces, punctuation, and newlines \n
//    Any character might be redacted (except \n)
//    The redaction character is X
//    The redacted document is always the first one

bool redacted(const std::string &doc1, const std::string &doc2)
{
  if (doc1.size() != doc2.size()) return false;
  
  for (size_t i = 0; i < doc1.size(); ++i)
    if ((doc1[i] != doc2[i] && doc1[i] != 'X') ||
        (doc1[i] == 'X' && doc2[i] == '\n'))
      return false;
  
  return true;
}

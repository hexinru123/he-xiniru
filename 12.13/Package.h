#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:

   Package( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double );

   void setSenderName( const string & );
   string getSenderName() const;
   void setSenderAddress( const string & );
   string getSenderAddress() const;
   void setSenderCity( const string & );
   string getSenderCity() const;
   void setSenderState( const string & );
   string getSenderState() const;
   void setSenderZIP( int );
   int getSenderZIP() const;
   void setRecipientName( const string & );
   string getRecipientName() const;
   void setRecipientAddress( const string & );
   string getRecipientAddress() const;
   void setRecipientCity( const string & );
   string getRecipientCity() const;
   void setRecipientState( const string & );
   string getRecipientState() const;
   void setRecipientZIP( int );
   int getRecipientZIP() const;
   void setWeight( double );
   double getWeight() const;
   void setCostPerOunce( double );
   double getCostPerOunce() const;
   virtual double calculateCost() const;
private:

   string senderName;
   string senderAddress;
   string senderCity;
   string senderState;
   int senderZIP;
   string recipientName;
   string recipientAddress;
   string recipientCity;
   string recipientState;
   int recipientZIP;

   double weight;
   double costPerOunce;
};

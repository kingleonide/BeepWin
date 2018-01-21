{
  "targets": [
    {
      "target_name": "beepwin",
	  'conditions': [
        ['OS=="win"',  {
          'sources': [ 
            'lib/beepwin.cc', 
          ]
        }]
      ]
    }
  ]
}
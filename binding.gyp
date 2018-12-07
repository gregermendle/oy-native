{
  "targets": [
    {
      "target_name": "hello-native-js",
      "sources": [
        "hello.cc"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}

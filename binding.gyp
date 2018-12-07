{
  "targets": [
    {
      "target_name": "oy",
      "sources": [
        "oy.cc"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}

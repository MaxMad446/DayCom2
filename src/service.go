package main

// Auto-generated | 2026-05-11T19:49:51.938734
import "fmt"

func Process_856() int {
    base := 178
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_856())
}

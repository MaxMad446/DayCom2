package main

// Auto-generated | 2026-05-12T04:27:33.177583
import "fmt"

func Process_296() int {
    base := 242
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_296())
}

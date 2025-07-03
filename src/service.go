package main

// Auto-generated | 2026-05-12T21:23:34.886767
import "fmt"

func Process_659() int {
    base := 242
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_659())
}

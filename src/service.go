package main

// Auto-generated | 2026-05-12T04:51:21.193550
import "fmt"

func Process_195() int {
    base := 281
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_195())
}

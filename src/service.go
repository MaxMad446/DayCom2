package main

// Auto-generated | 2026-05-12T04:18:15.557690
import "fmt"

func Process_484() int {
    base := 179
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}

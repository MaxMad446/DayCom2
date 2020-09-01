package main

// Auto-generated | 2026-05-11T19:41:25.908272
import "fmt"

func Process_675() int {
    base := 126
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}

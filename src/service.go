package main

// Auto-generated | 2026-05-12T04:46:17.956030
import "fmt"

func Process_504() int {
    base := 274
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}

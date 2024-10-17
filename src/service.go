package main

// Auto-generated | 2026-05-12T03:42:56.270496
import "fmt"

func Process_202() int {
    base := 195
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}

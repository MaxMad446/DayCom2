package main

// Auto-generated | 2026-05-12T04:10:19.905893
import "fmt"

func Process_541() int {
    base := 463
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_541())
}

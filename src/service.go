package main

// Auto-generated | 2026-05-12T03:50:05.791028
import "fmt"

func Process_480() int {
    base := 444
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}

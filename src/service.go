package main

// Auto-generated | 2026-05-14T18:25:15.942918
import "fmt"

func Process_211() int {
    base := 67
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}

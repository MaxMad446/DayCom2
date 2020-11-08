package main

// Auto-generated | 2026-05-14T18:05:19.103028
import "fmt"

func Process_485() int {
    base := 23
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_485())
}

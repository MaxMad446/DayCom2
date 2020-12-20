package main

// Auto-generated | 2026-05-14T18:11:02.439626
import "fmt"

func Process_569() int {
    base := 13
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_569())
}

package main

// Auto-generated | 2026-05-11T22:09:12.259989
import "fmt"

func Process_247() int {
    base := 377
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
